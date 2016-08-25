//
//
//  Created by 霍文轩 on 16/3/2.
//  Copyright © 2016年 霍文轩. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ChestMasterViewControllerDelegate
- (void)masterViewController:(UIViewController *)masterViewController didSelectedWithText:(NSString *)text;
@end

@interface ChestMasterViewController : UIViewController
@property (nonatomic, assign) id<ChestMasterViewControllerDelegate> delegate;
@end

// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com