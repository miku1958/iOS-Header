//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVAccessoryItemContentProviding-Protocol.h>

@class NSString, SVMoreFromButton;
@protocol SVMoreFromPublisherActionTitleProviding, SVMoreFromPublisherLogoProviding;

@interface SVMoreFromAccessoryItemContentProvider : NSObject <SVAccessoryItemContentProviding>
{
    SVMoreFromButton *_accessoryItemButton;
    id<SVMoreFromPublisherActionTitleProviding> _titleProvider;
    id<SVMoreFromPublisherLogoProviding> _logoProvider;
    CDUnknownBlockType _logoCancellationBlock;
}

@property (readonly, nonatomic) SVMoreFromButton *accessoryItemButton; // @synthesize accessoryItemButton=_accessoryItemButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType logoCancellationBlock; // @synthesize logoCancellationBlock=_logoCancellationBlock;
@property (readonly, nonatomic) id<SVMoreFromPublisherLogoProviding> logoProvider; // @synthesize logoProvider=_logoProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SVMoreFromPublisherActionTitleProviding> titleProvider; // @synthesize titleProvider=_titleProvider;

- (void).cxx_destruct;
- (id)initWithMoreFromButton:(id)arg1 titleProvider:(id)arg2 logoProvider:(id)arg3;
- (void)updateAccessoryItemForVideo:(id)arg1 animated:(BOOL)arg2;

@end
