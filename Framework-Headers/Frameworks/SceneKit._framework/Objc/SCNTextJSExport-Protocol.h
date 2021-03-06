//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSString;

@protocol SCNTextJSExport <JSExport>

@property (copy, nonatomic) NSString *alignmentMode;
@property (copy, nonatomic) id chamferProfile;
@property (nonatomic) double chamferRadius;
@property (nonatomic) long long chamferSegmentCount;
@property (nonatomic) struct CGRect containerFrame;
@property (nonatomic) double extrusionDepth;
@property (nonatomic) double flatness;
@property (strong, nonatomic) id font;
@property (copy, nonatomic) id string;
@property (readonly, nonatomic) struct CGSize textSize;
@property (copy, nonatomic) NSString *truncationMode;
@property (nonatomic, getter=isWrapped) BOOL wrapped;

+ (id)textWithString:(id)arg1 extrusionDepth:(double)arg2;
@end

