//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessProvider-Protocol.h>

@class CNCache, NSString;
@protocol CNScheduler;

@interface CNUIPRLikenessLoadingPlaceholderProvider : NSObject <CNUIPRLikenessProvider>
{
    id<CNScheduler> _resourceLock;
    CNCache *_cache;
}

@property (readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cnui_likenessForSize:(struct CGSize)arg1;
- (id)_cnui_likenessForSize:(struct CGSize)arg1 scale:(double)arg2;
- (unsigned long long)_cnui_likenessType;
- (id)init;
- (struct CGImage *)renderImageForSize:(struct CGSize)arg1 scale:(double)arg2;

@end

