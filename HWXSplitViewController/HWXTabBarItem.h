//
//  Created by 霍文轩 on 15/10/19.
//  Copyright © 2015年 霍文轩. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HWXTabBarItem : UIView
@property (nonatomic, retain) UILabel * titleLabel;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, assign) BOOL selected;
- (void)addTarget:(id)target action:(SEL)action;
@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com