//
//  ViewController.m
//  MyTools
//
//  Created by 李轩霖 on 15/12/11.
//  Copyright © 2015年 李轩霖. All rights reserved.
//

#import "ViewController.h"
#import "UIView+Extension.h"
#import "netWorkingTool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor whiteColor];

    UIButton *btn = [[UIButton alloc]initWithFrame:CGRectMake(20, 20, 100, 100)];
    [btn roundWithWidth:btn.width andBorderColor:[UIColor redColor]];
    [self.view addSubview:btn];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
