//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDSession, NSString;

@interface CDDevice : NSObject
{
    CDSession *_session;
    int remoteDataNotificationToken;
    unsigned int _identifier;
    NSString *_modelIdentifier;
    BOOL _defaultPaired;
    BOOL _isDefaultPaired;
}

@property (readonly) unsigned int identifier; // @synthesize identifier=_identifier;
@property BOOL isDefaultPaired; // @synthesize isDefaultPaired=_isDefaultPaired;
@property (readonly) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property (readonly) CDSession *session; // @synthesize session=_session;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 defaultPaired:(BOOL)arg4 error:(id *)arg5;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 error:(id *)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDevice:(id)arg1;
- (id)readLogDataWithError:(id *)arg1;
- (id)readSystemDataWithError:(id *)arg1;
- (BOOL)requestLogDataWithError:(id *)arg1;
- (BOOL)requestSystemDataWithError:(id *)arg1;
- (BOOL)setLogDataHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)setSystemDataHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;

@end

