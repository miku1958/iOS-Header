//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>

@class NSString, NSURL;

@interface MFFile : NSObject <EFLoggable>
{
    BOOL _isPurgeable;
    NSURL *_url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isPurgeable; // @synthesize isPurgeable=_isPurgeable;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)log;
- (void).cxx_destruct;
- (id)initWithFile:(id)arg1 account:(id)arg2;
- (BOOL)markPurgeableWithError:(id *)arg1;

@end
