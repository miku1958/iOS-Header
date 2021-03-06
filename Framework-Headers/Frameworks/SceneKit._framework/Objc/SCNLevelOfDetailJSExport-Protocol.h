//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSString, SCNGeometry;

@protocol SCNLevelOfDetailJSExport <JSExport>

@property (readonly) SCNGeometry *geometry;
@property (readonly) double screenSpaceRadius;
@property (readonly) double worldSpaceDistance;

+ (id)levelOfDetailWithGeometry:(SCNGeometry *)arg1 screenSpaceRadius:(double)arg2;
+ (id)levelOfDetailWithGeometry:(SCNGeometry *)arg1 worldSpaceDistance:(double)arg2;
- (id)copy;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)valueForKey:(NSString *)arg1;
- (id)valueForKeyPath:(NSString *)arg1;
@end

