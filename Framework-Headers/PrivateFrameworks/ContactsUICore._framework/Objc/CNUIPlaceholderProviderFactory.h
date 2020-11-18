//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPlaceholderProviderFactory-Protocol.h>

@class NSString;
@protocol CNScheduler, CNUIPRLikenessProvider;

@interface CNUIPlaceholderProviderFactory : NSObject <CNUIPlaceholderProviderFactory>
{
    id<CNUIPRLikenessProvider> _placeholderProvider;
    id<CNUIPRLikenessProvider> _loadingPlaceholderProvider;
    id<CNScheduler> _resourceLock;
    id<CNScheduler> _highPriorityLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<CNScheduler> highPriorityLock; // @synthesize highPriorityLock=_highPriorityLock;
@property (readonly) id<CNUIPRLikenessProvider> loadingPlaceholderProvider;
@property (readonly) id<CNUIPRLikenessProvider> placeholderProvider;
@property (strong, nonatomic) id<CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;

@end

