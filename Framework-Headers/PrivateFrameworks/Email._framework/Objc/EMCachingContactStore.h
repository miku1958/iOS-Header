//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, EFLazyCache;

@interface EMCachingContactStore : NSObject
{
    CNContactStore *_cnStore;
    EFLazyCache *_displayNameCache;
}

@property (readonly, nonatomic) CNContactStore *cnStore; // @synthesize cnStore=_cnStore;
@property (strong, nonatomic) EFLazyCache *displayNameCache; // @synthesize displayNameCache=_displayNameCache;

- (void).cxx_destruct;
- (id)_fetchDisplayNameForEmailAddress:(id)arg1 abbreviated:(BOOL)arg2;
- (void)_invalidateDisplayNameCache;
- (id)displayNameForEmailAddress:(id)arg1;
- (id)displayNameForEmailAddress:(id)arg1 abbreviated:(BOOL)arg2;
- (id)init;
- (id)initWithStore:(id)arg1;

@end
