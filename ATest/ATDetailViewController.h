//
//  ATDetailViewController.h
//  ATest
//
//  Created by Erich Wood on 11/3/11.
//  Copyright (c) 2011 Woern LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ATDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
