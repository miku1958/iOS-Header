//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsQueue : NSObject <MapsSuggestionsObject>
{
    struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue>> _cppQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *innerQueue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

+ (id)serialQueueWithName:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)asyncBlock:(CDUnknownBlockType)arg1;
- (id)initSerialQueueWithName:(id)arg1;
- (BOOL)syncBOOLReturningBlock:(CDUnknownBlockType)arg1;
- (void)syncBlock:(CDUnknownBlockType)arg1;
- (id)syncReturningBlock:(CDUnknownBlockType)arg1;

@end

