//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>

@class NSArray, NSString, XBApplicationSnapshotGenerationContext, XBApplicationSnapshotPredicate;

@interface XBApplicationSnapshotFetchRequest : NSObject <BSDescriptionProviding>
{
    XBApplicationSnapshotPredicate *_predicate;
    NSArray *_sortDescriptors;
    XBApplicationSnapshotGenerationContext *_fallbackGenerationContext;
}

@property (readonly, copy, nonatomic) NSArray *NSSortDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) XBApplicationSnapshotGenerationContext *fallbackGenerationContext; // @synthesize fallbackGenerationContext=_fallbackGenerationContext;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) XBApplicationSnapshotPredicate *predicate; // @synthesize predicate=_predicate;
@property (copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property (readonly) Class superclass;

+ (id)fetchRequest;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

