//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVAction.h>

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction
{
    int _absoluteOrder;
    NSURL *_priorURL;
}

@property (readonly, nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
@property (strong, nonatomic) NSURL *priorURL; // @synthesize priorURL=_priorURL;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3;

@end

