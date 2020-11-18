//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WBSCloudHistoryVisitIdentifier;

@interface WBSCloudHistoryVisit : NSObject
{
    BOOL _loadSuccessful;
    BOOL _httpNonGet;
    WBSCloudHistoryVisitIdentifier *_visitIdentifier;
    NSString *_title;
    WBSCloudHistoryVisitIdentifier *_redirectSourceVisitIdentifier;
    WBSCloudHistoryVisit *_redirectSourceVisit;
    WBSCloudHistoryVisitIdentifier *_redirectDestinationVisitIdentifier;
    WBSCloudHistoryVisit *_redirectDestinationVisit;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic, getter=wasHTTPNonGet) BOOL httpNonGet; // @synthesize httpNonGet=_httpNonGet;
@property (nonatomic, getter=loadWasSuccessful) BOOL loadSuccessful; // @synthesize loadSuccessful=_loadSuccessful;
@property (weak, nonatomic) WBSCloudHistoryVisit *redirectDestinationVisit; // @synthesize redirectDestinationVisit=_redirectDestinationVisit;
@property (copy, nonatomic) WBSCloudHistoryVisitIdentifier *redirectDestinationVisitIdentifier; // @synthesize redirectDestinationVisitIdentifier=_redirectDestinationVisitIdentifier;
@property (weak, nonatomic) WBSCloudHistoryVisit *redirectSourceVisit; // @synthesize redirectSourceVisit=_redirectSourceVisit;
@property (copy, nonatomic) WBSCloudHistoryVisitIdentifier *redirectSourceVisitIdentifier; // @synthesize redirectSourceVisitIdentifier=_redirectSourceVisitIdentifier;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) WBSCloudHistoryVisitIdentifier *visitIdentifier; // @synthesize visitIdentifier=_visitIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHistoryVisit:(id)arg1;

@end
