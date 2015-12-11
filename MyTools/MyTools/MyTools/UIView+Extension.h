//
//  UIView+Extension.h
//  MengQuietlyCalendar
//
//  Created by diana on 15/8/4.
//  Copyright (c) 2015年 mengquietly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;

- (UIViewController*)parentController;

/**
 *   制造圆形 View
 */
+(void)roundView:(UIView *)view WithWidth:(CGFloat)width;\

/**
 *  制造圆形 View
 *
 *  @param width 圆角弧度(if == 正方形边长度为圆形)
 *  @param color 边线颜色
 */
-(void)roundWithWidth:(CGFloat)width andBorderColor:(nullable UIColor *)color;
@end
