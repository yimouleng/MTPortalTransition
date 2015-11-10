//
//  myDissmiss.h
//  PortalTransitionExample
//
//  Created by 朱飞飞 on 15/11/4.
//  Copyright © 2015年 Ce Yang. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface myDissmiss : NSObject<UIViewControllerAnimatedTransitioning>
@property (nonatomic,strong) UIImage *left;
@property (nonatomic,strong) UIImage *right;
/**
 *  Gap between the target view and reflection, default is 8.0
 */
@property (nonatomic, assign) CGFloat reflectionGap;


/**
 *  ReflectionHeight / targetViewHeight, default is 0.5
 */
@property (nonatomic, assign) CGFloat reflectionScale;

/**
 *  Opacity of reflectionView, default is 0.5
 */
@property (nonatomic, assign) CGFloat reflectionAlpha;

/**
 *  Target view size / origin view size, default is 0.5
 */
@property (nonatomic, assign) CGFloat targetViewScale;

/**
 *  Portal animation duration, default is 2.0
 */
@property (nonatomic, assign) CGFloat portalAnimationDuration;

/**
 *  Animation duration, default is 3.O
 */
@property (nonatomic, assign) CGFloat scaleAnimationDuration;

/**
 *  Target view scale animation delay after portal animation, default is 0.5
 */
@property (nonatomic, assign) CGFloat delay;

/**
 *  UIViewController Transition Style, support UINavigationViewController Push, UIViewController present
 */
//@property (nonatomic, assign) CYPortalTransitionStyle portalTransitionStyle;



@end
