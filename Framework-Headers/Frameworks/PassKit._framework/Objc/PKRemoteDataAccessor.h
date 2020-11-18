//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDataAccessor.h>

@class NSString, PKPassLibrary;

@interface PKRemoteDataAccessor : PKDataAccessor
{
    PKPassLibrary *_library;
    NSString *_objectUniqueID;
}

@property (readonly, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
@property (readonly, nonatomic) NSString *objectUniqueID; // @synthesize objectUniqueID=_objectUniqueID;

- (void).cxx_destruct;
- (id)archiveData;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (id)displayProfileOfType:(long long)arg1;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2;
- (void)noteShared;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSettings:(unsigned long long)arg1;

@end
