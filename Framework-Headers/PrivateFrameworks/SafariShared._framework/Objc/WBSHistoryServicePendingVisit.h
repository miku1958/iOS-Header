//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WBSHistoryVisitIdentifier;

@interface WBSHistoryServicePendingVisit : NSObject
{
    BOOL _wasHTTPNonGet;
    BOOL _loadSuccessful;
    WBSHistoryVisitIdentifier *_visitIdentifier;
    unsigned long long _operation;
    WBSHistoryVisitIdentifier *_sourceVisitIdentifier;
    NSString *_title;
    long long _origin;
    unsigned long long _attributes;
}

@property (nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property (nonatomic) BOOL loadSuccessful; // @synthesize loadSuccessful=_loadSuccessful;
@property (nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property (nonatomic) long long origin; // @synthesize origin=_origin;
@property (readonly, nonatomic) unsigned long long score;
@property (strong, nonatomic) WBSHistoryVisitIdentifier *sourceVisitIdentifier; // @synthesize sourceVisitIdentifier=_sourceVisitIdentifier;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) WBSHistoryVisitIdentifier *visitIdentifier; // @synthesize visitIdentifier=_visitIdentifier;
@property (readonly, nonatomic) double visitTime;
@property (nonatomic) BOOL wasHTTPNonGet; // @synthesize wasHTTPNonGet=_wasHTTPNonGet;

- (void).cxx_destruct;
- (id)initWithWithVisitIdentifier:(id)arg1;

@end

