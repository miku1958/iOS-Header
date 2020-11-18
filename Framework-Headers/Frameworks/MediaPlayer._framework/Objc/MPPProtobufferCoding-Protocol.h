//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPMediaLibrary, PBCodable;
@protocol MPPProtobufferCoding;

@protocol MPPProtobufferCoding <NSObject>
- (id<MPPProtobufferCoding>)initWithProtobufferDecodableObject:(PBCodable *)arg1;
- (id<MPPProtobufferCoding>)initWithProtobufferDecodableObject:(PBCodable *)arg1 library:(MPMediaLibrary *)arg2;
- (PBCodable *)protobufferEncodableObject;
- (PBCodable *)protobufferEncodableObjectFromLibrary:(MPMediaLibrary *)arg1;
@end
