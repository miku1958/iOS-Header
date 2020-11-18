//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LSBestAppSuggestion, NSXPCConnection;
@protocol LSBestAppSuggestionManagerDelegate;

@interface LSBestAppSuggestionManager : NSObject
{
    id<LSBestAppSuggestionManagerDelegate> _delegate;
    BOOL _listeningForBestAppSuggestions;
    int _bestAppNotificationCount;
    LSBestAppSuggestion *_lastBestAppSuggestion;
    NSXPCConnection *_connection;
}

@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (weak) id<LSBestAppSuggestionManagerDelegate> delegate; // @dynamic delegate;

- (id)init;

@end
