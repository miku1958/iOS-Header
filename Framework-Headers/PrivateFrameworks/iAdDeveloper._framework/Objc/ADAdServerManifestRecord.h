//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface ADAdServerManifestRecord : NSObject
{
    BOOL _updateInProgress;
    BOOL _temporary;
    NSString *_name;
    NSURL *_URL;
    NSDictionary *_manifest;
    double _lastUpdate;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property (strong, nonatomic) NSDictionary *manifest; // @synthesize manifest=_manifest;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL temporary; // @synthesize temporary=_temporary;
@property (nonatomic) BOOL updateInProgress; // @synthesize updateInProgress=_updateInProgress;

- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
