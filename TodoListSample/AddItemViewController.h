//
//  AddItemViewController.h
//  TodoListSample
//
//  Created by hrfmsd on 2013/06/22.
//  Copyright (c) 2013年 hrfmsd. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemViewControllerDelegate;

@interface AddItemViewController : UITableViewController

@property (weak, nonatomic) id<AddItemViewControllerDelegate> delegate;

@end

@protocol AddItemViewControllerDelegate <NSObject>

- (void)addItemViewControllerDidCancel:(AddItemViewController *)controller;

- (void)addItemViewControllerDidFinish:(AddItemViewController *)controller item:(NSString *)item;

@end
