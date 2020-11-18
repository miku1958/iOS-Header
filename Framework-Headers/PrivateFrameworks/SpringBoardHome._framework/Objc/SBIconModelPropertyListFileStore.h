//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconModelStore-Protocol.h>

@class NSString, NSURL;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore, BSDescriptionProviding>
{
    NSURL *_currentIconStateURL;
    NSURL *_desiredIconStateURL;
}

@property (readonly, copy, nonatomic) NSURL *currentIconStateURL; // @synthesize currentIconStateURL=_currentIconStateURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *desiredIconStateURL; // @synthesize desiredIconStateURL=_desiredIconStateURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_delete:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_load:(id)arg1 error:(id *)arg2;
- (BOOL)_save:(id)arg1 url:(id)arg2 error:(id *)arg3;
- (BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithIconStateURL:(id)arg1 desiredIconStateURL:(id)arg2;
- (id)loadCurrentIconState:(id *)arg1;
- (id)loadDesiredIconState:(id *)arg1;
- (BOOL)saveCurrentIconState:(id)arg1 error:(id *)arg2;
- (BOOL)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
