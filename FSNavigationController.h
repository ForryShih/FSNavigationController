//
//  FSNavigationController.h
//  DaguerresCamera
//
//  Created by ForryShih on 5/1/15.
//  Copyright (c) 2015 Rampage Works. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSNavigationController : UINavigationController<UINavigationControllerDelegate>

@end


@interface UINavigationController (CompletionBlock)

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated completion:(void (^)(void))completion;

- (UIViewController *)popViewControllerAnimated:(BOOL)animated completion:(void (^)(void))completion;
- (NSArray *)popToViewController:(UIViewController *)viewController animated:(BOOL)animated completion:(void (^)(void))completion;
- (NSArray *)popToRootViewControllerAnimated:(BOOL)animated completion:(void (^)(void))completion;

@end
