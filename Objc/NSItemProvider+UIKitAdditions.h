//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSItemProvider.h>

@class NSData;

@interface NSItemProvider (UIKitAdditions)

@property (nonatomic) struct CGSize preferredPresentationSize;
@property (nonatomic) long long preferredPresentationStyle;
@property (copy, nonatomic) NSData *teamData;

+ (id)itemProviderWithURL:(id)arg1 title:(id)arg2;
- (void)_NSItemProviderDidRegisterObject:(id)arg1;
- (void)_addFileURLRepresentationIfPossible;
- (Class)_highestFidelityClassForLoading:(id)arg1;
- (id)_loadObjectOfClass:(Class)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)dataAvailabilityByTypeIdentifier;
- (BOOL)isDataAvailableImmediatelyForTypeIdentifier:(id)arg1;
- (void)registerFileProviderItemForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 dataAvailableImmediately:(BOOL)arg2 visibility:(long long)arg3 loadHandler:(CDUnknownBlockType)arg4;
- (void)setDataAvailability:(BOOL)arg1 forTypeIdentifier:(id)arg2;
@end

