//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADEntityWrapper.h>

@interface CADEventEntityWrapper : CADEntityWrapper
{
    double _occurrenceDate;
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalEntity:(void *)arg1 propertiesToLoad:(id)arg2 occurrenceDate:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)occurrenceDate;

@end

