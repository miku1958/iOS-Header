//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAMPPlaylist.h>

#import <SAObjects/SASyncWrap-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SAMPAceMediaEntityWrapsAcePlaylistWrap : SAMPPlaylist <SASyncWrap>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *generation;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSURL *identifier; // @dynamic identifier;
@property (readonly) Class superclass;

+ (id)aceMediaEntityWrapsAcePlaylistWrap;
+ (id)aceMediaEntityWrapsAcePlaylistWrapWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
