//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPProxyObject.h>

#import <Search/PRSMovieInfoDetailsSection-Protocol.h>

@class NSString;

@interface SPMovieInfoDetails : SPProxyObject <PRSMovieInfoDetailsSection>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long description_maxlines; // @dynamic description_maxlines;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *resultDescription; // @dynamic resultDescription;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @dynamic title;

@end

