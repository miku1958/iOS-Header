//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSObject, NSString;
@protocol MLCustomLayer;

@protocol MLCustomLayerFactory
- (NSObject<MLCustomLayer> *)createCustomLayer:(NSString *)arg1 withParameters:(NSDictionary *)arg2 error:(id *)arg3;
@end

