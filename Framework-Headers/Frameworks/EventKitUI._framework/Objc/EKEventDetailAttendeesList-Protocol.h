//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class NSArray, UIColor, UIViewController;

@protocol EKEventDetailAttendeesList <NSObject>

@property (strong, nonatomic) NSArray *accepted;
@property (strong, nonatomic) NSArray *declined;
@property (nonatomic) BOOL groupsNames;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (strong, nonatomic) UIColor *highlightedTextColor;
@property (strong, nonatomic) NSArray *maybe;
@property (strong, nonatomic) NSArray *noReply;
@property (strong, nonatomic) UIColor *textColor;
@property (strong, nonatomic) NSArray *ungrouped;
@property (weak, nonatomic) UIViewController *viewController;

- (void)setup;
@end

