//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLItemTransformerProtocol-Protocol.h>

@class NSString;

@interface QLURLItemTransformer : NSObject <QLItemTransformerProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allowedOutputClasses;
- (id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id *)arg3;

@end

