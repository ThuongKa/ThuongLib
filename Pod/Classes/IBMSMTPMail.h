//
//  IBMSMTPMail.h
//  IBMSMTPMailSend
//
//  Created by Thuong Vu on 8/18/15.
//  Copyright (c) 2015 Thuong Vu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IBMSMTPMail : NSObject

-(void)composeMail:(NSString *) title andContent:(NSString *) content;
-(void)sendMail;

@end
