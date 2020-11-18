//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Celestial/FigXPCCoding-Protocol.h>
#import <Celestial/NSCopying-Protocol.h>

@class NSString;

@interface FigCaptureIrisPreparedSettings : NSObject <FigXPCCoding, NSCopying>
{
    long long _settingsID;
    unsigned int _processedOutputFormat;
    unsigned int _rawOutputFormat;
    unsigned int _outputWidth;
    unsigned int _outputHeight;
    unsigned int _bracketedImageCount;
    int _SISMode;
    int _HDRMode;
}

@property (nonatomic) int HDRMode; // @synthesize HDRMode=_HDRMode;
@property (nonatomic) int SISMode; // @synthesize SISMode=_SISMode;
@property (nonatomic) unsigned int bracketedImageCount; // @synthesize bracketedImageCount=_bracketedImageCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int outputHeight; // @synthesize outputHeight=_outputHeight;
@property (nonatomic) unsigned int outputWidth; // @synthesize outputWidth=_outputWidth;
@property (nonatomic) unsigned int processedOutputFormat; // @synthesize processedOutputFormat=_processedOutputFormat;
@property (nonatomic) unsigned int rawOutputFormat; // @synthesize rawOutputFormat=_rawOutputFormat;
@property (nonatomic) long long settingsID; // @synthesize settingsID=_settingsID;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)figCaptureStillImageSettingsRepresentation;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
