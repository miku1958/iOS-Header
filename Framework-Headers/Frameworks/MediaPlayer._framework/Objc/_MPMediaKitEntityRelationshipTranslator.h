//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/_MPKeyPathEntityRelationshipTranslator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPMediaKitEntityRelationshipTranslator : _MPKeyPathEntityRelationshipTranslator
{
    NSString *_mediaKitType;
    CDUnknownBlockType _payloadTransformBlock;
}

@property (copy, nonatomic) NSString *mediaKitType; // @synthesize mediaKitType=_mediaKitType;
@property (readonly, nonatomic) CDUnknownBlockType payloadTransformBlock; // @synthesize payloadTransformBlock=_payloadTransformBlock;

- (void).cxx_destruct;
- (id)initWithRelatedMPModelClass:(Class)arg1 mediaKitType:(id)arg2 payloadTransformBlock:(CDUnknownBlockType)arg3;
- (id)prepareSource:(id)arg1 context:(id)arg2;

@end

