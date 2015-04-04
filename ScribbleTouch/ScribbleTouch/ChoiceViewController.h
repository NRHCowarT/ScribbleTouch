//
//  ChoiceViewController.h
//  ScribbleTouch
//
//  Created by Nick Cowart on 1/15/15.
//  Copyright (c) 2015 Nick Cowart. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ChoiceViewControllerDelegate;

@interface ChoiceViewController : UIViewController

@property (nonatomic) NSArray * choices;

@property (nonatomic,assign) id <ChoiceViewControllerDelegate> delegate;
@property (nonatomic) NSString * group;

@end

@protocol ChoiceViewControllerDelegate <NSObject>

-(void)choice:(NSString *)choice forGroup:(NSString *)group;

@end