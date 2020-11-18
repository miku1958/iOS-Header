//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/SCROBrailleDriverProtocol-Protocol.h>

@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol>
{
    BOOL _isDriverLoaded;
    NSString *_modelIdentifier;
    long long _mainSize;
    long long _statusSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)brailleInputMode;
- (void)dealloc;
- (id)getInputEvents;
- (id)init;
- (unsigned long long)interfaceVersion;
- (BOOL)isDriverLoaded;
- (BOOL)isInputEnabled;
- (BOOL)isSleeping;
- (int)loadDriverWithIOElement:(id)arg1;
- (long long)mainSize;
- (id)modelIdentifier;
- (BOOL)postsKeyboardEvents;
- (BOOL)setMainCells:(const char *)arg1 length:(long long)arg2;
- (BOOL)setStatusCells:(const char *)arg1 length:(long long)arg2;
- (long long)statusSize;
- (BOOL)supportsBlinkingCursor;
- (BOOL)unloadDriver;

@end
