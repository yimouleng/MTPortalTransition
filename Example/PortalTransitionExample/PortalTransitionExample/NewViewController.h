//
//  NewViewController.h
//  PortalTransitionExample
//
//  Created by Ce Yang on 23/05/2015.
//  Copyright (c) 2015 Ce Yang. All rights reserved.
//
#import "UIViewController+PortalTransition.h"
#import "CYViewControllerTransitioningDelegate.h"
#import <UIKit/UIKit.h>

@interface NewViewController : UIViewController
@property (nonatomic, strong) CYViewControllerTransitioningDelegate *viewControllerTransitionDelegate;
@end
