//
//  UIImage+CP.h
//  iCloudPlaySupport
//
//  Created by Guojiubo on 13-8-7.
//  Copyright (c) 2013年 XunLei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Processor)

+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

+ (UIImage *)imageFromView:(UIView *)theView;

+ (UIImage *)imageFromView:(UIView *)theView withRect:(CGRect)theRect;

// Convolution Oprations
- (UIImage *)gaussianBlurWith:(NSUInteger)inradius;
- (UIImage *)gaussianBlur;
- (UIImage *)edgeDetection;
- (UIImage *)emboss;
- (UIImage *)sharpen;
- (UIImage *)unsharpen;

// Geometric Operations
- (UIImage *)rotateInRadians:(float)radians;

// Morphological Operations
- (UIImage *)dilate;
- (UIImage *)erode;
- (UIImage *)dilateWithIterations:(int)iterations;
- (UIImage *)erodeWithIterations:(int)iterations;
//- (UIImage *)gradientWithIterations:(int)iterations;
//- (UIImage *)tophatWithIterations:(int)iterations;
//- (UIImage *)blackhatWithIterations:(int)iterations;

// Histogram Operations
- (UIImage *)equalization;

// 支持6.0以上
- (UIImage *)gaussianBlurWithLevel:(CGFloat)blur;

- (UIImage *)imageWithBlurLevel:(CGFloat)blur;

@end
