//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegateProxy-Protocol.h>

@class NSObject, NSString, NSXPCConnection;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsRemoteSource : MapsSuggestionsBaseSource <MapsSuggestionsSourceDelegateProxy, MapsSuggestionsSource>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;
- (void).cxx_destruct;
- (void)_closeConnection;
- (BOOL)_openConnectionIfNecessary;
- (void)addOrUpdateSuggestionEntriesData:(id)arg1 sourceNameData:(id)arg2 deleteMissing:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)canProduceEntriesOfType:(unsigned long long)arg1;
- (void)dealloc;
- (void)deleteEntriesData:(id)arg1 sourceNameData:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntries;

@end

