//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFPopoverSourceInfo-Protocol.h>

@class NSString, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface SFUIBarButtonItemPopoverSourceInfo : NSObject <_SFPopoverSourceInfo>
{
    UIBarButtonItem *_item;
}

@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGRect popoverSourceRect;
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1;

@end
