//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NENexusFlow.h>

@class NWPath;

@interface NENexusPathFlow : NENexusFlow
{
    NWPath *_path;
}

@property (strong) NWPath *path; // @synthesize path=_path;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)endpoint;
- (id)initWithPath:(id)arg1;
- (id)parameters;

@end

