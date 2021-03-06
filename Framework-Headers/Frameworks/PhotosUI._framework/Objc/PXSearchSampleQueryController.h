//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSearchQueryControllerProtocol-Protocol.h>

@class NSString;

@interface PXSearchSampleQueryController : NSObject <PXSearchQueryControllerProtocol>
{
    CDUnknownBlockType _sampleResultsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) CDUnknownBlockType sampleResultsHandler; // @synthesize sampleResultsHandler=_sampleResultsHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithResultsHandler:(CDUnknownBlockType)arg1;
- (void)performSearch:(id)arg1;

@end

