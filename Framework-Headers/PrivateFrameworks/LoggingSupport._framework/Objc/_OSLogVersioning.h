//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject
{
    _OSLogCollectionReference *_lcr;
    BOOL _closeOnRelease;
    BOOL _hasEndTimeRef;
    long long _state;
    long long _version;
}

@property (readonly, nonatomic) BOOL hasEndTimeRef; // @synthesize hasEndTimeRef=_hasEndTimeRef;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;
@property (readonly, nonatomic) long long version; // @synthesize version=_version;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 closeOnRelease:(BOOL)arg2 error:(id *)arg3;
- (id)initWithCollection:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (BOOL)performDestructiveUpdates:(id *)arg1;

@end

