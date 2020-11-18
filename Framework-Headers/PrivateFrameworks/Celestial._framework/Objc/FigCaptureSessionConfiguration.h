//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Celestial/FigXPCCoding-Protocol.h>
#import <Celestial/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSMutableArray *_connections;
    long long _configurationID;
    BOOL _usesAppAudioSession;
    BOOL _configuresAppAudioSession;
    BOOL _allowedToRunInWindowedLayout;
}

@property (nonatomic) BOOL allowedToRunInWindowedLayout; // @synthesize allowedToRunInWindowedLayout=_allowedToRunInWindowedLayout;
@property (nonatomic) long long configurationID; // @synthesize configurationID=_configurationID;
@property (nonatomic) BOOL configuresAppAudioSession; // @synthesize configuresAppAudioSession=_configuresAppAudioSession;
@property (readonly, nonatomic) NSArray *connectionConfigurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *sinkConfigurations;
@property (readonly, nonatomic) NSArray *sourceConfigurations;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesAppAudioSession; // @synthesize usesAppAudioSession=_usesAppAudioSession;

+ (void)initialize;
- (void)addConnectionConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)removeConnectionConfiguration:(id)arg1;

@end
