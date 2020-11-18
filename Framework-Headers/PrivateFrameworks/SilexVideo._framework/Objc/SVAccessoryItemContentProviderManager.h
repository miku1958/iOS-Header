//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVAccessoryItemContentManager-Protocol.h>
#import <SilexVideo/SVAccessoryItemContentProviderManager-Protocol.h>

@class NSMapTable, NSString;

@interface SVAccessoryItemContentProviderManager : NSObject <SVAccessoryItemContentProviderManager, SVAccessoryItemContentManager>
{
    NSMapTable *_contentProviders;
}

@property (readonly, nonatomic) NSMapTable *contentProviders; // @synthesize contentProviders=_contentProviders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)registerAccessoryItem:(id)arg1 withContentProvider:(id)arg2;
- (void)updateAccessoryItem:(id)arg1 forVideo:(id)arg2 animated:(BOOL)arg3;

@end
