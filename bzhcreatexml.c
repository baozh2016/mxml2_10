/************************************************************************
auther:baozhaohui
time:2017.05.08
note:create xml and save it in a file
************************************************************************/

#include "mxml.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	mxml_node_t *xml = NULL;
	mxml_node_t *node = NULL;
	FILE *fp = NULL;

	xml = mxmlNewXML("1.0");

	node = mxmlNewElement(xml, "baozhaohui");
	mxmlNewText(node, 0, "boy");
	node = mxmlNewElement(xml, "qinwen");
	mxmlNewText(node, 0, "girl");

	fp = fopen("bzhtestcreatexml.xml", "w");
	mxmlSaveFile(xml, fp, MXML_NO_CALLBACK);
	fclose(fp);


	return 0;
}
