//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, UIViewController;
@protocol PXCMMSuggestion;

@protocol PXMutableMessagesExtensionViewModel <NSObject>

@property (nonatomic) BOOL drawerActive;
@property (strong, nonatomic) UIViewController *presentedViewController;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic) unsigned long long selectedActivityType;
@property (strong, nonatomic) NSDate *selectedMessageDate;
@property (copy, nonatomic) NSString *selectedMessageText;
@property (strong, nonatomic) id<PXCMMSuggestion> selectedSuggestion;
@property (strong, nonatomic) NSURL *selectedURL;

- (void)clearSelection;
@end

