//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class NSArray, NSDictionary;

@protocol AVAirSerializationProtocol <NSObject>
+ (NSArray *)airRepresentationForArray:(NSArray *)arg1;
+ (NSArray *)itemArrayWithAirRepresentations:(NSArray *)arg1;
+ (id)itemWithAirDictionaryRepresentation:(NSDictionary *)arg1;
- (NSDictionary *)airDictionaryRepresentation;
@end
