//
//  ZBPackageFilterViewController.h
//  Zebra
//
//  Created by Wilson Styres on 11/14/20.
//  Copyright © 2020 Wilson Styres. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBFilterDelegate.h"

@class ZBPackageFilter;

NS_ASSUME_NONNULL_BEGIN

@interface ZBPackageFilterViewController : UITableViewController
- (instancetype)initWithFilter:(ZBPackageFilter *)filter delegate:(id <ZBFilterDelegate>)delegate;
@end

NS_ASSUME_NONNULL_END
