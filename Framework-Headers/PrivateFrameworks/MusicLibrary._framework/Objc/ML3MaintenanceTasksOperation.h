//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ML3MusicLibrary, NSObject;
@protocol OS_xpc_object;

@interface ML3MaintenanceTasksOperation : NSOperation
{
    ML3MusicLibrary *_library;
    NSObject<OS_xpc_object> *_activity;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property (readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;

- (void).cxx_destruct;
- (id)initWithLibrary:(id)arg1 activity:(id)arg2;
- (void)main;

@end

