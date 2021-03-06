/* 
Copyright 2013 Hardcoded Software (http://www.hardcoded.net)

This software is licensed under the "BSD" License as described in the "LICENSE" file, 
which should be included with this package. The terms are also available at 
http://www.hardcoded.net/licenses/bsd_license
*/

#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>

@interface HSQLPreviewItem : NSObject <QLPreviewItem>
{
    NSURL *url;
    NSString *title;
}
- (id)initWithUrl:(NSURL *)aUrl title:(NSString *)aTitle;
@end