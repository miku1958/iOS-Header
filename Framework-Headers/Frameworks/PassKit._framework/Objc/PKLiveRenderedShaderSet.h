//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKLiveRenderedShaderSet : NSObject <NSSecureCoding>
{
    NSString *_geometryEntryPointShader;
    NSString *_surfaceEntryPointShader;
    NSString *_lightingModelEntryPointShader;
    NSString *_fragmentEntryPointShader;
}

@property (strong, nonatomic) NSString *fragmentEntryPointShader; // @synthesize fragmentEntryPointShader=_fragmentEntryPointShader;
@property (strong, nonatomic) NSString *geometryEntryPointShader; // @synthesize geometryEntryPointShader=_geometryEntryPointShader;
@property (strong, nonatomic) NSString *lightingModelEntryPointShader; // @synthesize lightingModelEntryPointShader=_lightingModelEntryPointShader;
@property (strong, nonatomic) NSString *surfaceEntryPointShader; // @synthesize surfaceEntryPointShader=_surfaceEntryPointShader;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataAccessor:(id)arg1 suffix:(id)arg2;

@end
