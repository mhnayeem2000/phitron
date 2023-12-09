from django import forms
import datetime
from django.db import models


# Create your forms here.

class ExForm(forms.Form):
    name = forms.CharField()
    comment = forms.CharField(widget=forms.Textarea)
    day = forms.DateField(initial=datetime.date.today)

