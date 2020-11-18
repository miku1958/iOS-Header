//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVAirTransportTransformationProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVDataValueTransformer : NSObject <AVAirTransportTransformationProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)messageTransformerWithClass:(Class)arg1;
- (id)dataForMessage:(id)arg1;
- (id)reverseTransformerForMessageData:(id)arg1;

@end
